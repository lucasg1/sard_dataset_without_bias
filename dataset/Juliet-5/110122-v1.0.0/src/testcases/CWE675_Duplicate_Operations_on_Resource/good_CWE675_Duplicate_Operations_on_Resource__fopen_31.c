void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        ; 
    }
}
