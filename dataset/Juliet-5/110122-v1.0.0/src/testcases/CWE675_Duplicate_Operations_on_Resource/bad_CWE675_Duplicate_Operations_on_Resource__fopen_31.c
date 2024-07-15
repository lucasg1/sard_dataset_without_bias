void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
<START>
        fclose(data);
<END>
    }
}
