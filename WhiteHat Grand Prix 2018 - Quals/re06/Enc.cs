		// Token: 0x06000005 RID: 5 RVA: 0x000020A4 File Offset: 0x000002A4
		public static string Enc(string s, int e, int n)
		{
			int[] array = new int[s.Length];
			for (int i = 0; i < s.Length; i++)
			{
				array[i] = (int)s[i];
			}
			int[] array2 = new int[array.Length];
			for (int i = 0; i < array.Length; i++)
			{
				array2[i] = MainWindow.mod(array[i], e, n);
			}
			string text = "";
			for (int i = 0; i < array.Length; i++)
			{
				text += (char)array2[i];
			}
			return Convert.ToBase64String(Encoding.Unicode.GetBytes(text));
		}
