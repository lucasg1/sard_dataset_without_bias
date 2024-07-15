namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    {
        FILE * data = dataRef;
<START>
        fclose(data);
<END>
    }
}
} 
