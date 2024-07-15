void FUN0()
{
    FILE * data;
    data = NULL; 
    goto source;
source:
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    goto source;
source:
    data = fopen("GoodSource_fopen.txt", "w+");
    goto sink;
sink:
    fclose(data);
}
