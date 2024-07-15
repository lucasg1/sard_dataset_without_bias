namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("GoodSource_fopen.txt", "w+");
}
void FUN1(FILE * &data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
}
} 
namespace NAMESPACE0
{
void FUN0(FILE * &data);
void FUN3()
{
    FILE * data;
    data = NULL; 
    FUN0(data);
    fclose(data);
}
void FUN1(FILE * &data);
void FUN5()
{
    FILE * data;
    data = NULL; 
    FUN1(data);
    ; 
}
} 
