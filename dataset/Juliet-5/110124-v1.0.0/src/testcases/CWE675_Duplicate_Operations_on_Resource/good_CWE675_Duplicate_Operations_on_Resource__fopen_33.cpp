namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    {
        FILE * data = dataRef;
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    FILE * &dataRef = data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    {
        FILE * data = dataRef;
        ; 
    }
}
} 
