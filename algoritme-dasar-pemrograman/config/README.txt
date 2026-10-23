DOMjudge bulk import — 67 peserta

Urutan import:
1. groups.json        -> Import JSON/YAML: groups
2. organizations.json -> Import JSON/YAML: organizations
3. teams.json         -> Import JSON/YAML: teams
4. accounts.yaml      -> Import JSON/YAML: accounts

Username = NIM
Password = NIM + !
Nama akun dan nama tim = nama mahasiswa.
Setiap akun terhubung ke tim dengan ID NIM yang sama.
Bendera negara menggunakan afiliasi IPB University dengan kode negara ISO alpha-3 IDN (Indonesia).

Catatan:
- Import groups.json hanya jika kategori "participants" belum ada. Jika sudah ada, ubah group_ids di teams.json agar cocok dengan ID kategori yang ada.
- Jika organisasi ID "IPB" sudah ada, sesuaikan organizations.json/organization_id atau gunakan organisasi yang sudah ada.
- Jika tim atau username dengan ID yang sama sudah ada, duplikasi dapat menyebabkan import gagal.
- Password sesuai pola yang diminta dan mudah ditebak; bagikan secara privat.
