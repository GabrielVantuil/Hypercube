Set objFso = CreateObject("Scripting.FileSystemObject")
Set Folder = objFSO.GetFolder("C:\Users\Gabriel Vantuil\Google Drive\Pessoal\Projetos\Impressoras 3D\Hypercube 1.0\CAD\images")

For Each File In Folder.Files
    sNewFile = File.Name
    sNewFile = Replace(sNewFile," ","_")
    if (sNewFile<>File.Name) then 
        File.Move(File.ParentFolder+"\"+sNewFile)
    end if

Next