[Uno.Compiler.UxGenerated]
public partial class accountBook: Fuse.Controls.Page
{
    static accountBook()
    {
    }
    [global::Uno.UX.UXConstructor]
    public accountBook()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Controls.Panel();
        var temp1 = new global::Fuse.Controls.Image();
        var temp2 = new global::Fuse.Controls.Text();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Controls.Grid();
        var temp5 = new global::Fuse.Controls.Rectangle();
        var temp6 = new global::Fuse.Controls.Text();
        var temp7 = new global::Fuse.Gestures.Clicked();
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Controls.Circle();
        var temp10 = new global::Fuse.Gestures.Clicked();
        var temp11 = new global::Fuse.Controls.Rectangle();
        var temp12 = new global::Fuse.Controls.Text();
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Controls.Shadow();
        var temp15 = new global::Fuse.Controls.ScrollView();
        var temp16 = new global::Fuse.Controls.StackPanel();
        this.SourceLineNumber = 1;
        this.SourceFileName = "accountBook.ux";
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "accountBook.ux";
        temp.Children.Add(temp1);
        temp.Children.Add(temp2);
        temp.Children.Add(temp3);
        temp.Children.Add(temp4);
        temp.Children.Add(temp13);
        temp1.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp1.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp1.Y = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp1.SourceLineNumber = 7;
        temp1.SourceFileName = "accountBook.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/logoGray.png"));
        temp2.Value = "000-0000-0000-00 (KEB하나)";
        temp2.FontSize = 10f;
        temp2.Color = float4(0.627451f, 0.627451f, 0.627451f, 1f);
        temp2.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp2.Y = new Uno.UX.Size(110f, Uno.UX.Unit.Unspecified);
        temp2.SourceLineNumber = 8;
        temp2.SourceFileName = "accountBook.ux";
        temp3.Value = "190,000원";
        temp3.FontSize = 20f;
        temp3.Color = float4(0f, 0.4313726f, 0.6588235f, 1f);
        temp3.X = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp3.Y = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp3.SourceLineNumber = 9;
        temp3.SourceFileName = "accountBook.ux";
        temp4.RowCount = 1;
        temp4.ColumnCount = 3;
        temp4.Color = float4(0.4588235f, 0.6784314f, 0.8039216f, 1f);
        temp4.Width = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        temp4.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp4.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp4.Y = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        temp4.Opacity = 1f;
        temp4.SourceLineNumber = 10;
        temp4.SourceFileName = "accountBook.ux";
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp8);
        temp4.Children.Add(temp11);
        temp5.SourceLineNumber = 11;
        temp5.SourceFileName = "accountBook.ux";
        global::Fuse.Controls.Grid.SetRow(temp5, 0);
        global::Fuse.Controls.Grid.SetColumn(temp5, 0);
        temp5.Children.Add(temp6);
        temp5.Children.Add(temp7);
        temp6.Value = "수입";
        temp6.TextWrapping = Fuse.Controls.TextWrapping.NoWrap;
        temp6.FontSize = 11f;
        temp6.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp6.TextColor = float4(1f, 1f, 1f, 1f);
        temp6.X = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
        temp6.Y = new Uno.UX.Size(13f, Uno.UX.Unit.Unspecified);
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "accountBook.ux";
        temp7.SourceLineNumber = 13;
        temp7.SourceFileName = "accountBook.ux";
        temp8.SourceLineNumber = 18;
        temp8.SourceFileName = "accountBook.ux";
        global::Fuse.Controls.Grid.SetRow(temp8, 0);
        global::Fuse.Controls.Grid.SetColumn(temp8, 1);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp10);
        temp9.Color = float4(0f, 0.4313726f, 0.6588235f, 1f);
        temp9.Width = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
        temp9.Height = new Uno.UX.Size(16f, Uno.UX.Unit.Unspecified);
        temp9.SourceLineNumber = 19;
        temp9.SourceFileName = "accountBook.ux";
        temp10.SourceLineNumber = 20;
        temp10.SourceFileName = "accountBook.ux";
        temp11.SourceLineNumber = 25;
        temp11.SourceFileName = "accountBook.ux";
        global::Fuse.Controls.Grid.SetRow(temp11, 0);
        global::Fuse.Controls.Grid.SetColumn(temp11, 2);
        temp11.Children.Add(temp12);
        temp12.Value = "지출";
        temp12.TextWrapping = Fuse.Controls.TextWrapping.NoWrap;
        temp12.FontSize = 11f;
        temp12.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp12.TextColor = float4(1f, 1f, 1f, 1f);
        temp12.X = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp12.Y = new Uno.UX.Size(13f, Uno.UX.Unit.Unspecified);
        temp12.SourceLineNumber = 26;
        temp12.SourceFileName = "accountBook.ux";
        temp13.Color = float4(0.9686275f, 0.9882353f, 1f, 1f);
        temp13.Height = new Uno.UX.Size(190f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Top;
        temp13.LayoutRole = Fuse.LayoutRole.Standard;
        temp13.SourceLineNumber = 29;
        temp13.SourceFileName = "accountBook.ux";
        temp13.Children.Add(temp14);
        temp14.Color = float4(0.7568628f, 0.7568628f, 0.7568628f, 1f);
        temp14.SourceLineNumber = 30;
        temp14.SourceFileName = "accountBook.ux";
        temp15.SourceLineNumber = 34;
        temp15.SourceFileName = "accountBook.ux";
        temp15.Children.Add(temp16);
        temp16.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp16.SourceLineNumber = 35;
        temp16.SourceFileName = "accountBook.ux";
        this.Children.Add(temp);
        this.Children.Add(temp15);
    }
}
