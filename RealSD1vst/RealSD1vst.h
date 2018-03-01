// 以下の ifdef ブロックは DLL からのエクスポートを容易にするマクロを作成するための 
// 一般的な方法です。この DLL 内のすべてのファイルは、コマンド ラインで定義された REALSD1VST_EXPORTS
// シンボルを使用してコンパイルされます。このシンボルは、この DLL を使用するプロジェクトでは定義できません。
// ソースファイルがこのファイルを含んでいる他のプロジェクトは、 
// REALSD1VST_API 関数を DLL からインポートされたと見なすのに対し、この DLL は、このマクロで定義された
// シンボルをエクスポートされたと見なします。
#ifdef REALSD1VST_EXPORTS
#define REALSD1VST_API __declspec(dllexport)
#else
#define REALSD1VST_API __declspec(dllimport)
#endif

// このクラスは RealSD1vst.dll からエクスポートされました。
class REALSD1VST_API CRealSD1vst {
public:
	CRealSD1vst(void);
	// TODO: メソッドをここに追加してください。
};

extern REALSD1VST_API int nRealSD1vst;

REALSD1VST_API int fnRealSD1vst(void);
