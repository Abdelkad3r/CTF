		// Token: 0x06000006 RID: 6 RVA: 0x00002150 File Offset: 0x00000350
		public static int mod(int m, int e, int n)
		{
			int[] array = new int[100];
			int num = 0;
			do
			{
				array[num] = e % 2;
				num++;
				e /= 2;
			}
			while (e != 0);
			int num2 = 1;
			for (int i = num - 1; i >= 0; i--)
			{
				num2 = num2 * num2 % n;
				bool flag = array[i] == 1;
				if (flag)
				{
					num2 = num2 * m % n;
				}
			}
			return num2;
		}
