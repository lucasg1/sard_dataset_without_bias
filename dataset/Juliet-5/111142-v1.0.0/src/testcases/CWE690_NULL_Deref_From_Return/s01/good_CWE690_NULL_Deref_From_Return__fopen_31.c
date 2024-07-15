void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
