namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete [] data;
<END>
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
