void FUN0(FILE * dataArray[]);
void FUN1()
{
    FILE * data;
    FILE * dataArray[5];
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN2(FILE * dataArray[]);
void FUN3()
{
    FILE * data;
    FILE * dataArray[5];
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    dataArray[2] = data;
    FUN2(dataArray);
}
void FUN0(FILE * dataArray[])
{
    FILE * data = dataArray[2];
    fclose(data);
}
void FUN2(FILE * dataArray[])
{
    FILE * data = dataArray[2];
    ; 
}
