/* =======!!! ATENCAO !!!======== */
/* ===== NÃO ALTERAR DAQUI =====> */
#include <stdio.h>

#define JA_TEM_PAI  "No %d ja possui pai\n"
#define JA_TEM_DOIS_FILHOS "No %d ja possui dois filhos\n"
#define NAO_TEM_PAI "No %d nao possui pai\n"
#define NAO_TEM_ANCESTRAL_COMUM "Nao ha ancestral comum\n"
#define NO_RAIZ     "No raiz nao pode ser filho\n"

typedef struct {
    int data;
    int esquerda;
    int direita;
    int pai;
} Node;

// Retorna o no inicializado
Node inicializar(Node arvore, int data);

// Ligar um no filho a um no pai
void ligar(Node arvore[], int pai, int filho);

// Corta a conexão entre um no pai com o seu filho
void cortar(Node arvore[], int elemento);

// Imprime a arvore em pre-ordem
void imprimirArvore(Node arvore[], int elemento);

// Retorna o menor ancestral comum entre dois nos
int menorAncestralComum(Node arvore[], int node1, int node2);

/* ===== A FUNCAO MAIN() JA ESTA PRONTA! ===== */
int main() {
    int n;
    scanf("%d", &n);
    Node arvore[n]; // Vetor de nos da arvore

    for(int i = 0; i < n; i++){
        arvore[i] = inicializar(arvore[i], i+1);
    }

    int pai, filho, elemento;
    char op;

    while(1){
        scanf(" %c", &op);
        if(op == 's') break;
        switch(op){
            case 'l':
                scanf("%d %d", &pai, &filho);
                ligar(arvore, pai-1, filho-1);
                break;
            case 'c':
                scanf("%d", &elemento);
                cortar(arvore, elemento-1);
                break;
            case 'i':
                scanf("%d", &elemento);
                imprimirArvore(arvore, elemento-1);
                printf("\n");
                break;
            case 'a':
                int node1, node2;
                scanf("%d %d", &node1, &node2);

                int ancestral = menorAncestralComum(arvore, node1-1, node2-1);
                if(ancestral == -1) printf(NAO_TEM_ANCESTRAL_COMUM); // Nao ha ancestral comum
                else printf("%d\n", ancestral);

                break;
            default:
                break;
        }
    }

    return 0;
}
/* <===== ATE AQUI ===== */

/* === IMPLEMENTE AS FUNCOES DAQUI PRA BAIXO ===> */
// Retorna o no inicializado
Node inicializar(Node arvore, int data)
{
    Node aux;
    aux.data = data;
    aux.pai = -1;
    aux.esquerda = -1;
    aux.direita = -1;
    return aux;
}

// Ligar um no filho a um no pai
void ligar(Node arvore[], int pai, int filho)
{
    if(filho == 0)
    {
        printf(NO_RAIZ);
    } else if(arvore[filho].pai != -1)
    {
        printf(JA_TEM_PAI, filho+1);
    } else if(arvore[pai].esquerda == -1)
    {
        arvore[pai].esquerda = filho;
        arvore[filho].pai = pai;
    } else if(arvore[pai].direita == -1)
    {
        arvore[pai].direita = filho;
        arvore[filho].pai = pai;
    } else {
        printf(JA_TEM_DOIS_FILHOS, pai+1);
    }
}

// Corta a conexão entre um no pai com o seu filho
void cortar(Node arvore[], int elemento)
{
    if(arvore[elemento].pai == -1)
    {
        printf(NAO_TEM_PAI, elemento+1);
    } else if(arvore[arvore[elemento].pai].direita == elemento)
    {
        arvore[arvore[elemento].pai].direita = -1;
    } else {
        arvore[arvore[elemento].pai].esquerda = -1;
    }
    arvore[elemento].pai = -1;
}

// Imprime a arvore em pre-ordem
void imprimirArvore(Node arvore[], int elemento)
{    
    int percorridos[10000] = {elemento};
    for(int topo = 1; topo > 0;) 
    {
        topo--;
        int aux = percorridos[topo];
        printf("%d ", arvore[aux].data);
        if(arvore[aux].direita != -1)
        {
            percorridos[topo++] = arvore[aux].direita;
        }
        if(arvore[aux].esquerda != -1)
        {
            percorridos[topo++] = arvore[aux].esquerda;
        }
    }
}

// Retorna o menor ancestral comum entre dois nos
int menorAncestralComum(Node arvore[], int node1, int node2)
{
    int contador_node1 = node1;
    while (arvore[contador_node1].pai != -1)
    {
        int contador_node2 = node2;
        contador_node1 = arvore[contador_node1].pai;
        while (arvore[contador_node2].pai != -1)
        {
            contador_node2 = arvore[contador_node2].pai;
            if (contador_node2 == contador_node1)
            {
                return contador_node1+1;
            }
        }
    }
    return -1;
}