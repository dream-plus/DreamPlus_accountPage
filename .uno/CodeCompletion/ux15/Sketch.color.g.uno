namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class color: Fuse.Controls.Panel
    {
        static color()
        {
        }
        [global::Uno.UX.UXConstructor]
        public color()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Panel();
            var temp2 = new global::Fuse.Controls.Path();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(24f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(24f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.color.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.color.ux";
            temp.Children.Add(temp1);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.color.ux";
            temp1.Children.Add(temp2);
            temp2.Data = "M 0.5 1 C 0.7761423749 1 1 0.7761423749 1 0.5 C 1 0.2238576251 0.7761423749 0 0.5 0 C 0.2238576251 0 0 0.2238576251 0 0.5 C 0 0.7761423749 0.2238576251 1 0.5 1";
            temp2.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp2.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp2.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp2.Margin = float4(0f, 0f, 0f, 0f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.color.ux";
            temp2.Fills.Add(temp3);
            temp3.Color = float4(0.5254902f, 0.7176471f, 0.8235294f, 1f);
            this.Children.Add(temp);
        }
    }
}
