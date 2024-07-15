void FUN0()
{
    int k;
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
