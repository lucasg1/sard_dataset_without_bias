namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    FUN0(data);
<START>
    fclose(data);
<END>
}
} 
