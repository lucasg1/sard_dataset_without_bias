void FUN0(FILE * dataArray[]);
void FUN1()
{
    FILE * data;
    FILE * dataArray[5];
    data = NULL; 
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(FILE * dataArray[])
{
    FILE * data = dataArray[2];
<START>
    fclose(data);
<END>
}
