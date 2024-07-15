void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    while(1)
    {
        if (data != NULL)
        {
            fclose(data);
        }
        break;
    }
}
