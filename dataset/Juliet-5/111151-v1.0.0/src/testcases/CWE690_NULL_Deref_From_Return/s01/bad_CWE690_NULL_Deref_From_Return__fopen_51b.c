void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    FUN0(data);
}
void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
