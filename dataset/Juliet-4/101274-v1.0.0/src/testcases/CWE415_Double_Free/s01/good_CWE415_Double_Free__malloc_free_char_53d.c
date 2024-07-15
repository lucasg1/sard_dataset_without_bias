void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN3(char * data)
{
    FUN2(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN6(char * data);
void FUN2(char * data)
{
    FUN6(data);
}
void FUN1(char * data);
void FUN9()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    FUN1(data);
}
void FUN3(char * data);
void FUN11()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    FUN3(data);
}
void FUN4(char * data)
{
    free(data);
}
void FUN6(char * data)
{
    ; 
}
