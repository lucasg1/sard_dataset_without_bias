namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    {
        FILE * data = dataRef;
<START>
        data = fopen("BadSink_fopen.txt", "w+");
<END>
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
} 
