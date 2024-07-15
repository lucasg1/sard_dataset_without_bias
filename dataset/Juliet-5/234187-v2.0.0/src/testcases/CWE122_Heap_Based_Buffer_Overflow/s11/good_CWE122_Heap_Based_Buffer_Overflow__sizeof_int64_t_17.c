void FUN0()
{
    int h;
    int64_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (int64_t *)malloc(sizeof(*data));
        if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
    }
    printLongLongLine(*data);
    free(data);
}
