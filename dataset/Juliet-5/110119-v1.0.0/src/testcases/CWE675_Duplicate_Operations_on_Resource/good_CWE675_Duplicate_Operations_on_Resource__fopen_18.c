void FUN0()
{
    FILE * data;
    data = NULL; 
    goto source;
source:
    data = fopen("BadSource_fopen.txt", "w+");
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
