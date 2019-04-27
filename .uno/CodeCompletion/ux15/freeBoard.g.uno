[Uno.Compiler.UxGenerated]
public partial class freeBoard: Fuse.Controls.Page
{
    internal global::Fuse.Controls.ScrollView parentScrollView;
    internal global::Fuse.Reactive.EventBinding temp_eb22;
    static freeBoard()
    {
    }
    [global::Uno.UX.UXConstructor]
    public freeBoard()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Data("page2");
        parentScrollView = new global::Fuse.Controls.ScrollView();
        var temp1 = new global::Fuse.Controls.StackPanel();
        var temp2 = new global::Fuse.Gestures.Clicked();
        var temp3 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/board/freeBoard.ux";
        parentScrollView.Name = __selector0;
        parentScrollView.SourceLineNumber = 2;
        parentScrollView.SourceFileName = "Pages/board/freeBoard.ux";
        parentScrollView.Children.Add(temp1);
        temp1.Color = float4(0.9176471f, 0.9176471f, 0.9176471f, 1f);
        temp1.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Pages/board/freeBoard.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Children.Add(temp2);
        temp2.SourceLineNumber = 5;
        temp2.SourceFileName = "Pages/board/freeBoard.ux";
        temp2.Actions.Add(temp3);
        temp2.Bindings.Add(temp_eb22);
        temp3.SourceLineNumber = 6;
        temp3.SourceFileName = "Pages/board/freeBoard.ux";
        temp3.Handler += temp_eb22.OnEvent;
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Pages/board/freeBoard.ux";
        this.Children.Add(parentScrollView);
    }
    static global::Uno.UX.Selector __selector0 = "parentScrollView";
}
