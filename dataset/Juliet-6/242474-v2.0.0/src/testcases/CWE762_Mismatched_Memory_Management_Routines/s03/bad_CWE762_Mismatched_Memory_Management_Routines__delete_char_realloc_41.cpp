namespace NAMESPACE0
{
void FUN0(char * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = NULL;
    data = (char *)realloc(data, 100*sizeof(char));
    if (data == NULL) {exit(-1);}
    FUN0(data);
}
} 
