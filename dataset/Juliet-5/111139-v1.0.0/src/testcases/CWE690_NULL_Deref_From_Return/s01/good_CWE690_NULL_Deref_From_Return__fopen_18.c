void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    goto sink;
sink:
    if (data != NULL)
    {
        fclose(data);
    }
}
