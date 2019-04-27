namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Logininput: Fuse.Controls.Panel
    {
        static Logininput()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Logininput()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Text();
            var temp2 = new global::Fuse.Controls.Panel();
            var temp3 = new global::Fuse.Controls.Rectangle();
            var temp4 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(31f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Logininput.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Logininput.ux";
            temp.Children.Add(temp1);
            temp.Children.Add(temp2);
            temp1.Value = "로그인";
            temp1.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp1.FontSize = 16f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp1.Color = float4(1f, 1f, 1f, 1f);
            temp1.TextTruncation = Fuse.Controls.TextTruncation.None;
            temp1.Width = new Uno.UX.Size(23.66667f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(58.06452f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.Offset = new Uno.UX.Size2(new Uno.UX.Size(37.33333f, Uno.UX.Unit.Percent), new Uno.UX.Size(25.80645f, Uno.UX.Unit.Percent));
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.Logininput.ux";
            temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.SourceLineNumber = 7;
            temp2.SourceFileName = "SketchSymbols/Sketch.Logininput.ux";
            temp2.Children.Add(temp3);
            temp3.CornerRadius = float4(100f, 100f, 100f, 100f);
            temp3.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp3.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp3.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp3.Margin = float4(0f, 0f, 0f, 0f);
            temp3.SourceLineNumber = 9;
            temp3.SourceFileName = "SketchSymbols/Sketch.Logininput.ux";
            temp3.Fills.Add(temp4);
            temp4.Color = float4(0.1019608f, 0.5137255f, 0.6941177f, 1f);
            this.Children.Add(temp);
        }
    }
}
