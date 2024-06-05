
#include <stdio.h>
#include <string.h>
void check_keyword(char p_single_word[10]);
void check_identifier(char single_word[10]);
void check_operator(char single_word[10]);
void check_seperator(char single_word[10]);

const char *keyword_list[32] = {"auto", "break", "case", "char", "const", "continue", "default",
                                "do", "double", "else", "enum", "extern", "float", "for", "goto",
                                "if", "int", "long", "register", "return", "short", "signed",
                                "sizeof", "static", "struct", "switch", "typedef", "union",
                                "unsigned", "void", "volatile", "while"};

const char *identifier_list[3] = {"main", "printf", "scanf"};

const char *operator_list[15] = {"!", "%", "^", "&", "*", "-", "+", "=", "~", "|", ".", "<", ">", "/", "?"};

const char *separator_list[6] = {":", ";", "(", ")", "[", "]"};

int main(int argc, char *argv[])
{
    char get_character;
    char single_word[10];
    int i = 0;
    FILE *fptr;
    fptr = fopen(argv[1], "r");
    if (fptr == NULL)
    {
        printf("The file is not opened.");
        return 1;
    }
    else
    {
        if (feof(fptr) == EOF)
        {
            printf("End of file.");
            return 1;
        }
        else
        {
            printf("\nOpen        : %s : Success", argv[1]);
            printf("\nParsing     : %s : Started", argv[1]);
            printf("\n\n");
            int j = 0;
            do
            {
                get_character = fgetc(fptr);
                single_word[i] = get_character;
                i++;
                if (get_character == ' ' || get_character == '\n')
                {
                    single_word[i - 1] = '\0';
                     //printf("\nBefore : %s", single_word);
                    check_keyword(single_word);
                    i = 0;
                }
            } while (feof(fptr) == 0);
        }
        fclose(fptr);
        return 0;
    }
}

void check_keyword(char single_word[10])
{
    for (int index = 0; index < (sizeof(keyword_list) / 8); index++)
    {
        if (strcmp(single_word, keyword_list[index]) == 0)
        {
            printf("Keyword    : %s\n", single_word);
            break;
        }
    }
    check_identifier(single_word);
}

void check_identifier(char single_word[10])
{
    for (int index = 0; index < (sizeof(identifier_list) / 8); index++)
    {
        if (strcmp(single_word, identifier_list[index]) == 0)
        {
            printf("Identifier : %s\n", single_word);
            break;
        }
    }
    check_operator(single_word);
}

void check_operator(char single_word[10])
{
    for (int index = 0; index < (sizeof(operator_list) / 8); index++)
    {
        if (strcmp(single_word, operator_list[index]) == 0)
        {
            printf("Operator   : %s\n", single_word);
            break;
        }
    }
    check_seperator(single_word);
}

void check_seperator(char single_word[10])
{
    for (int index = 0; index < (sizeof(separator_list) / 8); index++)
    {
        if (strcmp(single_word, separator_list[index]) == 0)
        {
            printf("Seperator  : %s\n", single_word);
            break;
        }
    }
}