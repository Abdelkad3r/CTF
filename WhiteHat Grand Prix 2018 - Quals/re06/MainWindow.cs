using System;
using System.CodeDom.Compiler;
using System.ComponentModel;
using System.Diagnostics;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Markup;

namespace WpfApp1
{
	// Token: 0x02000003 RID: 3
	public class MainWindow : Window, IComponentConnector
	{
		// Token: 0x06000004 RID: 4 RVA: 0x00002093 File Offset: 0x00000293
		public MainWindow()
		{
			this.InitializeComponent();
		}

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

		// Token: 0x06000007 RID: 7 RVA: 0x000021C4 File Offset: 0x000003C4
		private void btn_check_Click(object sender, RoutedEventArgs e)
		{
			string text = this.tb_key.Text;
			string a = MainWindow.Enc(text, 9157, 41117);
			bool flag = a == "iB6WcuCG3nq+fZkoGgneegMtA5SRRL9yH0vUeN56FgbikZFE1HhTM9R4tZPghhYGFgbUeHB4tEKRRNR4Ymu0OwljQwmRRNR4jWBweOKRRyCRRAljLGQ=";
			if (flag)
			{
				MessageBox.Show("Correct!! You found FLAG");
			}
			else
			{
				MessageBox.Show("Try again!");
			}
		}

		// Token: 0x06000008 RID: 8 RVA: 0x0000221C File Offset: 0x0000041C
		[DebuggerNonUserCode]
		[GeneratedCode("PresentationBuildTasks", "4.0.0.0")]
		public void InitializeComponent()
		{
			bool contentLoaded = this._contentLoaded;
			if (!contentLoaded)
			{
				this._contentLoaded = true;
				Uri resourceLocator = new Uri("/WpfApp1;component/mainwindow.xaml", UriKind.Relative);
				Application.LoadComponent(this, resourceLocator);
			}
		}

		// Token: 0x06000009 RID: 9 RVA: 0x00002254 File Offset: 0x00000454
		[DebuggerNonUserCode]
		[GeneratedCode("PresentationBuildTasks", "4.0.0.0")]
		[EditorBrowsable(EditorBrowsableState.Never)]
		void IComponentConnector.Connect(int connectionId, object target)
		{
			if (connectionId != 1)
			{
				if (connectionId != 2)
				{
					this._contentLoaded = true;
				}
				else
				{
					this.btn_check = (Button)target;
					this.btn_check.Click += this.btn_check_Click;
				}
			}
			else
			{
				this.tb_key = (TextBox)target;
			}
		}

		// Token: 0x04000001 RID: 1
		internal TextBox tb_key;

		// Token: 0x04000002 RID: 2
		internal Button btn_check;

		// Token: 0x04000003 RID: 3
		private bool _contentLoaded;
	}
}
