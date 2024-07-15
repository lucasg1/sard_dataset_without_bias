namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("file.txt", "w+");
}
} 
namespace NAMESPACE0
{
void FUN0(FILE * &data);
void FUN2()
{
    FILE * data;
    data = NULL;
    FUN0(data);
<START>
    fclose(data);
<END>
}
} 
