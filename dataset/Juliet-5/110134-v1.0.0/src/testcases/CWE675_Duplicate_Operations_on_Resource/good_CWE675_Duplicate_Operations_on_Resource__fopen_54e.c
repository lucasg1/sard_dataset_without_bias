void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN2(FILE * data);
void FUN3(FILE * data)
{
    FUN2(data);
}
void FUN4(FILE * data);
void FUN5(FILE * data)
{
    FUN4(data);
}
void FUN6(FILE * data);
void FUN7(FILE * data)
{
    FUN6(data);
}
void FUN5(FILE * data);
void FUN9()
{
    FILE * data;
    data = NULL; 
    data = fopen("GoodSource_fopen.txt", "w+");
    FUN5(data);
}
void FUN7(FILE * data);
void FUN11()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN7(data);
}
void FUN1(FILE * data);
void FUN4(FILE * data)
{
    FUN1(data);
}
void FUN3(FILE * data);
void FUN6(FILE * data)
{
    FUN3(data);
}
void FUN0(FILE * data)
{
    fclose(data);
}
void FUN2(FILE * data)
{
    ; 
}
