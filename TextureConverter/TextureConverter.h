#pragma once
#include <string>
#include "../Externals/DirectXTex/DirectXTex.h"

class TextureConverter
{
public:

	/// <summary>
	/// �e�N�X�`����WIC����DDS�ɕϊ�����
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void ConvertTextureWICToDDS(const std::string& filePath);
	
private:

	/// <summary>
	/// �e�N�X�`���t�@�C���ǂݍ���
	/// </summary>
	/// <param name="filePath">�t�@�C���p�X</param>
	void LoadWICTextureFromFile(const std::string& filePath);

private:

	/// <summary>
	/// �}���`�o�C�g����������C�h������ɕϊ�
	/// </summary>
	/// <param name="mString">�}���`�o�C�g������</param>
	/// <returns>���C�h������</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

private:

    /// <summary>
    /// �t�H���_�p�X�ƃt�@�C�����𕪗�����
    /// </summary>
    /// <param name="filePath>�t�@�C���p�X</param>
	void SeparateFilePath(const std::wstring& filePath);

private:

    /// <summary>
    /// DDS�e�N�X�`���Ƃ��ăt�@�C�������o��
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

