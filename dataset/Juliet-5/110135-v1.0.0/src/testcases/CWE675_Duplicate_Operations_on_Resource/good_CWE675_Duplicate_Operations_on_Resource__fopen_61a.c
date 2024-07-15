FILE * FUN0(FILE * data)
{
    data = fopen("GoodSource_fopen.txt", "w+");
    return data;
}
FILE * FUN1(FILE * data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    return data;
}
FILE * FUN0(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = FUN0(data);
    fclose(data);
}
FILE * FUN1(FILE * data);
void FUN5()
{
    FILE * data;
    data = NULL; 
    data = FUN1(data);
    ; 
}
