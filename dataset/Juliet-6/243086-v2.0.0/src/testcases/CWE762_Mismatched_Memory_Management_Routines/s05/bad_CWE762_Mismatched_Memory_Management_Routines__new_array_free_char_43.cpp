namespace NAMESPACE0
{
void FUN0(char * &data)
{
    data = new char[100];
}
void FUN1()
{
    char * data;
    data = NULL;
    FUN0(data);
<START>
    free(data);
<END>
}
} 
