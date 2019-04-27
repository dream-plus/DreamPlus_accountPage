namespace Sketch
{
    [Uno.Compiler.UxGenerated]
    public partial class Google: Fuse.Controls.Panel
    {
        static Google()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Google()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Controls.Image();
            this.Width = new Uno.UX.Size(38f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(38f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "SketchSymbols/Sketch.Google.ux";
            temp.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 2;
            temp.SourceFileName = "SketchSymbols/Sketch.Google.ux";
            temp.File = new global::Uno.UX.BundleFileSource(import("../../../SketchSymbols/images/848b67d9e3bcc8fe6f8fa205bbdc00c1bd7ac5f3.png"));
            this.Children.Add(temp);
        }
    }
}
