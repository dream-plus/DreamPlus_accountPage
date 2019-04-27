[Uno.Compiler.UxGenerated]
public partial class QnABoard: Fuse.Controls.Page
{
    internal global::Fuse.Controls.ScrollView parentScrollView;
    internal global::Fuse.Reactive.EventBinding temp_eb20;
    static QnABoard()
    {
    }
    [global::Uno.UX.UXConstructor]
    public QnABoard()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Data("page3");
        parentScrollView = new global::Fuse.Controls.ScrollView();
        var temp1 = new global::Fuse.Controls.StackPanel();
        var temp2 = new global::Fuse.Gestures.Clicked();
        var temp3 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb20 = new global::Fuse.Reactive.EventBinding(temp);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/board/QnABoard.ux";
        parentScrollView.Name = __selector0;
        parentScrollView.SourceLineNumber = 2;
        parentScrollView.SourceFileName = "Pages/board/QnABoard.ux";
        parentScrollView.Children.Add(temp1);
        temp1.Color = float4(0.9176471f, 0.9176471f, 0.9176471f, 1f);
        temp1.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Pages/board/QnABoard.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp1, Fuse.Layouts.Dock.Top);
        temp1.Children.Add(temp2);
        temp2.SourceLineNumber = 5;
        temp2.SourceFileName = "Pages/board/QnABoard.ux";
        temp2.Actions.Add(temp3);
        temp2.Bindings.Add(temp_eb20);
        temp3.SourceLineNumber = 6;
        temp3.SourceFileName = "Pages/board/QnABoard.ux";
        temp3.Handler += temp_eb20.OnEvent;
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Pages/board/QnABoard.ux";
        this.Children.Add(parentScrollView);
    }
    static global::Uno.UX.Selector __selector0 = "parentScrollView";
}
