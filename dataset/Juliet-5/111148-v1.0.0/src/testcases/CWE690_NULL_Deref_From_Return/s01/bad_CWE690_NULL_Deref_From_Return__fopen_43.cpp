namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = fopen("file.txt", "w+");
}
void FUN1()
{
    FILE * data;
    data = NULL;
    FUN0(data);
<START>
    fclose(data);
<END>
}
} 
