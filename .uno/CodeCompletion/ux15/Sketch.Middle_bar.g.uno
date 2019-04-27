namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Middle_bar: Fuse.Controls.Panel
    {
        static Middle_bar()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Middle_bar()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Rectangle();
            var temp2 = new global::Fuse.Controls.Shadow();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(261f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Middle_bar.ux";
            temp.Width = new Uno.UX.Size(99.61686f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.Offset = new Uno.UX.Size2(new Uno.UX.Size(0.1915709f, Uno.UX.Unit.Percent), new Uno.UX.Size(0f, Uno.UX.Unit.Percent));
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Middle_bar.ux";
            temp.Children.Add(temp1);
            temp1.CornerRadius = float4(100f, 100f, 100f, 100f);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.Middle_bar.ux";
            temp1.Fills.Add(temp3);
            temp1.Children.Add(temp2);
            temp2.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
            temp2.Angle = 90f;
            temp2.Distance = 2f;
            temp2.Size = 4f;
            temp2.Color = float4(0f, 0f, 0f, 0.1653646f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.Middle_bar.ux";
            temp3.Color = float4(1f, 1f, 1f, 1f);
            this.Children.Add(temp);
        }
    }
}
