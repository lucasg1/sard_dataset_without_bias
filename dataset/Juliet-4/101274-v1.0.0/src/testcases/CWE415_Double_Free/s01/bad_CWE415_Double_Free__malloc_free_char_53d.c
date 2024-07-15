void FUN0(char * data);
void FUN1(char * data)
{
    FUN0(data);
}
void FUN2(char * data);
void FUN0(char * data)
{
    FUN2(data);
}
void FUN1(char * data);
void FUN5()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    FUN1(data);
}
void FUN2(char * data)
{
<START>
    free(data);
<END>
}
