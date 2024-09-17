#include <stdio.h>
#include <conio.h>

// structs sao como CLASSES em outras linguagens

// INICIO STRUCTS AUXILIARES
// definicao de das structs
typedef struct reg_nome
{
    char nome_f[40];
    char sobrenome[40];
}nome;

typedef struct reg_endereco
{
    char rua[40];
    int numero;
    char cep[10];
    char bairro[30];
    char cidade[30];
    char estado[30];
}endereco;
// FIM STRUCTS AUXILIARES

// struct main
struct reg_func
{
    struct reg_nome nome; // chama a struct 'reg_nome' e armazena na varivel 'nome'
    char funcao[30];
    float salario;
    int dependentes;
    struct reg_endereco endereco; // chama a struct 'reg_endereco' e armazena na var 'endereco'

};

struct reg_func cad_func[3]; // 3 significa que será um array de 3 'reg_func' dentro do array 'cad_func'


int main() {
    int i;
    printf("\n--- Cadastro de Funcionario ---");

    for (i=0; i<1; i++) // loop para um registro de um funcionario
        {
        /*
        NOTAS DO ALUNO:
            - gets() ->      strings
            - scanf() -> floats
         */

        // -- INFORMACOES GERAIS --
        printf("\nNome do funcionario: ");
        fflush(stdin); // limpa o buffer do teclado
        gets(cad_func[i].nome.nome_f); // atraves de 'cad_func', entramos na struct 'reg_func' que possui a variavel\
                                        'nome', que por sua vez está instanciando a struct 'reg_nome'

        printf("Sobrenome do funcionario: ");
        fflush(stdin); // limpa o buffer do teclado
        gets(cad_func[i].nome.sobrenome);

        printf("Funcao do funcionario: ");
        fflush(stdin); // limpa o buffer do teclado
        gets(cad_func[i].funcao);

        printf("Salario do funcionario: ");
        scanf("%f",&cad_func[i].salario);

        printf("Dependentes do funcionario: ");
        scanf("%d",&cad_func[i].dependentes);

        // -- ENDERECO --

        printf("--- ENDERECO ---");
        printf("\nRua ou avenida: ");
        fflush(stdin);
        gets(cad_func[i].endereco.rua);

        printf("Numero da rua: ");
        scanf("%d",&cad_func[i].endereco.numero);

        printf("CEP: ");
        scanf("%s",&cad_func[i].endereco.cep);

        printf("Bairro: ");
        fflush(stdin);
        gets(cad_func[i].endereco.bairro);

        printf("Cidade: ");
        fflush(stdin);
        gets(cad_func[i].endereco.cidade);

        printf("Estado: ");
        fflush(stdin);
        gets(cad_func[i].endereco.estado);
        }; // fim do registro de funcionario

    for(i=0; i<1; i++)
        {
        printf("\n -- IMPRESSAO DOS RESULTADOS --");
        printf("\nDados do funcionario: %d",i+1);
        printf("\nNome e sobrenome: %s %s",
               cad_func[i].nome.nome_f, cad_func[i].nome.sobrenome);
        printf("\nFuncao: %s",cad_func[i].funcao);
        printf("\nSalario: %f",cad_func[i].salario);
        printf("\nQntd de dependentes: %d",cad_func[i].dependentes);
        printf("\nRua: %s",cad_func[i].endereco.rua);
        printf("\Numero: %d",cad_func[i].endereco.numero);
        printf("\nCEP: %s",cad_func[i].endereco.cep);
        printf("\nBairro: %s",cad_func[i].endereco.bairro);
        printf("\nCidade: %s",cad_func[i].endereco.cidade);
        printf("\nEstado: %s",cad_func[i].endereco.estado);



        }; // fim da impressao

    getch();





}
