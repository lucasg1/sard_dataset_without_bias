namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    {
        FILE * data = dataRef;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
} 
