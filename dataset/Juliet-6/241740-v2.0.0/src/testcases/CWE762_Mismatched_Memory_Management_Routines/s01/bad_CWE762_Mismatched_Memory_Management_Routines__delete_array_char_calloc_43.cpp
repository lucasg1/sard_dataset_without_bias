namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = (char *)calloc(100, sizeof(char));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    delete [] data;
<END>
}
} 
