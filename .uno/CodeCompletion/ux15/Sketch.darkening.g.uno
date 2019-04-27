namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class darkening: Fuse.Controls.Panel
    {
        static darkening()
        {
        }
        [global::Uno.UX.UXConstructor]
        public darkening()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Rectangle();
            var temp2 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(375f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(812f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.darkening.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.darkening.ux";
            temp.Children.Add(temp1);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.darkening.ux";
            temp1.Fills.Add(temp2);
            temp2.Color = float4(0f, 0f, 0f, 0.5f);
            this.Children.Add(temp);
        }
    }
}
