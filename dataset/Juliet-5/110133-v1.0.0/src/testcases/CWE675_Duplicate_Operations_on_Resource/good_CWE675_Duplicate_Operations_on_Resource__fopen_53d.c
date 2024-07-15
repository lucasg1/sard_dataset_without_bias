void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN2(data);
}
void FUN5(FILE * data);
void FUN0(FILE * data)
{
    FUN5(data);
}
void FUN7(FILE * data);
void FUN2(FILE * data)
{
    FUN7(data);
}
void FUN9(FILE * data);
void FUN5(FILE * data)
{
    FUN9(data);
}
void FUN11(FILE * data);
void FUN7(FILE * data)
{
    FUN11(data);
}
void FUN9(FILE * data)
{
    fclose(data);
}
void FUN11(FILE * data)
{
    ; 
}
