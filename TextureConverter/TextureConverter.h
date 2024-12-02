#pragma once
#include <string>
#include "../Externals/DirectXTex/DirectXTex.h"

class TextureConverter
{
public:

	/// <summary>
	/// テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void ConvertTextureWICToDDS(const std::string& filePath);
	
private:

	/// <summary>
	/// テクスチャファイル読み込み
	/// </summary>
	/// <param name="filePath">ファイルパス</param>
	void LoadWICTextureFromFile(const std::string& filePath);

private:

	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="mString">マルチバイト文字列</param>
	/// <returns>ワイド文字列</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

private:

    /// <summary>
    /// フォルダパスとファイル名を分離する
    /// </summary>
    /// <param name="filePath>ファイルパス</param>
	void SeparateFilePath(const std::wstring& filePath);

private:

    /// <summary>
    /// DDSテクスチャとしてファイル書き出し
    /// </summary>
	void SaveDDSTextureToFile();

private:

	DirectX::TexMetadata metadata_;

	DirectX::ScratchImage scratchImage_;

private:
	
	std::wstring directoryPath_;

	std::wstring fileName_;

	std::wstring fileExt_;

};

