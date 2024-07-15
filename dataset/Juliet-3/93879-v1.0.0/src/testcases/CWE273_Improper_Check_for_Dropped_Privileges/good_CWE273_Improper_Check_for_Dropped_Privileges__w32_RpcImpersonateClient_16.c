void FUN0()
{
    while(1)
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
        break;
    }
}
