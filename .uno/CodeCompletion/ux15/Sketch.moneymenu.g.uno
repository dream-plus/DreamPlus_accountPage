namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class moneymenu: Fuse.Controls.Panel
    {
        static moneymenu()
        {
        }
        [global::Uno.UX.UXConstructor]
        public moneymenu()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Panel();
            var temp1 = new global::Fuse.Controls.Rectangle();
            var temp2 = new global::Fuse.Controls.Shadow();
            var temp3 = new global::Fuse.Drawing.SolidColor();
            this.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.moneymenu.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.moneymenu.ux";
            temp.Children.Add(temp1);
            temp1.CornerRadius = float4(20f, 20f, 20f, 20f);
            temp1.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp1.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp1.Margin = float4(0f, 0f, 0f, 0f);
            temp1.SourceLineNumber = 4;
            temp1.SourceFileName = "SketchSymbols/Sketch.moneymenu.ux";
            temp1.Fills.Add(temp3);
            temp1.Children.Add(temp2);
            temp2.Mode = Fuse.Controls.Shadow.ShadowMode.PerPixel;
            temp2.Angle = 90f;
            temp2.Distance = 2f;
            temp2.Size = 2f;
            temp2.Color = float4(0f, 0f, 0f, 0.227072f);
            temp2.SourceLineNumber = 6;
            temp2.SourceFileName = "SketchSymbols/Sketch.moneymenu.ux";
            temp3.Color = float4(0.4693793f, 0.6832176f, 0.801047f, 1f);
            this.Children.Add(temp);
        }
    }
}
