void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    FUN0(data);
}
