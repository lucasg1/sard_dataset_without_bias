void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN1(FILE * data);
void FUN3()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    FUN1(data);
}
void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
