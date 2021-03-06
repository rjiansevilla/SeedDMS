<?php
//    MyDMS. Document Management System
//    Copyright (C) 2002-2005  Markus Westphal
//    Copyright (C) 2006-2008 Malcolm Cowe
//    Copyright (C) 2010 Matteo Lucarelli
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program; if not, write to the Free Software
//    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

$text = array(
'accept' => "Принять",
'access_denied' => "Доступ запрещен",
'access_inheritance' => "Наследование доступа",
'access_mode' => "Режим доступа",
'access_mode_all' => "Полный доступ",
'access_mode_none' => "Нет доступа",
'access_mode_read' => "Доступ для чтения",
'access_mode_readwrite' => "Доступ чтение-запись",
'access_permission_changed_email' => "Доступ изменен",
'actions' => "Действия",
'add' => "Добавить",
'add_doc_reviewer_approver_warning' => "Документ получает статус ДОПУЩЕН автоматически если не назначены ни рецензент ни утверждающий",
'add_document' => "Добавить документ",
'add_document_link' => "Добавить ссылку",
'add_event' => "Добавить событие",
'add_group' => "Добавить группу",
'add_member' => "Добавить члена",
'add_multiple_documents' => "Добавить несколько документов",
'add_multiple_files' => "Добавить несколько файлов (название файла будет использоано в качестве названия документа)",
'add_subfolder' => "Добавить подкаталог",
'add_user' => "Добавить пользователя",
'add_user_to_group' => "Добавить пользователя в группу",
'admin' => "Админ",
'admin_tools' => "Админка",
'all_categories' => "Все категории",
'all_documents' => "Все документы",
'all_pages' => "Все страницы",
'all_users' => "Все пользователи",
'already_subscribed' => "Уже подписан",
'and' => "и",
'apply' => "Применить",
'approval_deletion_email' => "Запрос на утверждение удален",
'approval_group' => "Утверждающая группа",
'approval_request_email' => "Запрос на утверждение",
'approval_status' => "Статус утверждения",
'approval_submit_email' => "Утверждено",
'approval_summary' => "Инфо об утверждении",
'approval_update_failed' => "Произошла ошибка при изменении статуса утверждения",
'approvers' => "Утверждающие",
'april' => "Апрель",
'archive_creation' => "Создание архива",
'archive_creation_warning' => "Эта операция создаст архив, содержащий все папки. После создания архив будет сохранен в папке анных сервера.<br>ВНИМАНИЕ: Архив созданый как понятный человеку, будет не пригоден в качестве бекапа!",
'assign_approvers' => "Назначить утверждающих",
'assign_reviewers' => "Назначить рецензентов",
'assign_user_property_to' => "Назначить свойства пользователя",
'assumed_released' => "Утвержден",
'august' => "Август",
'automatic_status_update' => "Автоматическое изменение статуса",
'back' => "Назад",
'backup_list' => "Список бекапов",
'backup_remove' => "Удалить бекап",
'backup_tools' => "Иструменты бекапа",
'between' => "между",
'calendar' => "Календарь",
'cancel' => "Отмена",
'cannot_assign_invalid_state' => "Невозможно изменить устаревший или отклоненный документ",
'cannot_change_final_states' => "Нельзя изменять статус у отклоненного, просроченого или ожидающего рецензии или утверждения",
'cannot_delete_yourself' => "Нельзя удалить себя",
'cannot_move_root' => "Нельзя переместить корневую папку",
'cannot_retrieve_approval_snapshot' => "Невозможно получить утверждающий снимок для этой версии документа",
'cannot_retrieve_review_snapshot' => "Невозможно получить рецензирующий снимок для этой версии документа",
'cannot_rm_root' => "Нельзя удалить корневую папку",
'category' => "Категория",
'category_exists' => "Категория существует",
'category_filter' => "Только категории",
'category_in_use' => "Эта категория используется документами",
'category_noname' => "Введите название категории",
'categories' => "Категории",
'change_assignments' => "Изменить назначения",
'change_password' => "Изменить пароль",
'change_password_message' => "Пароль изменен",
'change_status' => "Сменить статус",
'choose_category' => "Выберите",
'choose_group' => "Выберите группу",
'choose_target_category' => "Выберите категорию",
'choose_target_document' => "Выберите документ",
'choose_target_folder' => "Выберите папку",
'choose_user' => "Выберите пользователя",
'comment_changed_email' => "Коментарий изменен",
'comment' => "Коментарий",
'comment_for_current_version' => "Коментарий версии",
'confirm_create_fulltext_index' => "Да, пересоздать полнотекстовый индекс!",
'confirm_pwd' => "Подтвердите пароль",
'confirm_rm_backup' => "Удалить файл \"[arkname]\"?<br>Действие перманентно",
'confirm_rm_document' => "Удалить документ \"[documentname]\"?<br>Действие перманентно",
'confirm_rm_dump' => "Удалить файл \"[dumpname]\"?<br>Действие перманентно",
'confirm_rm_event' => "Удалить событие \"[name]\"?<br>Действие перманентно",
'confirm_rm_file' => "Удалить файл \"[name]\" документа \"[documentname]\"?<br>Действие перманентно",
'confirm_rm_folder' => "Удалить папку \"[foldername]\" и ее содержимое?<br>Действие перманентно",
'confirm_rm_folder_files' => "Удалить все файлы в папке \"[foldername]\" и ее подпапок?<br>Действие перманентно",
'confirm_rm_group' => "Удалить группу \"[groupname]\"?<br>Действие перманентно",
'confirm_rm_log' => "Удалить лог \"[logname]\"?<br>Дествие перманентно",
'confirm_rm_user' => "Удалить пользователя \"[username]\"?<br>Действие перманентно",
'confirm_rm_version' => "Удалить версию [version] документа \"[documentname]\"?<br>Действие перманентно",
'content' => "Содержимое",
'continue' => "Продолжить",
'create_fulltext_index' => "Создать полнотекстовый индекс",
'create_fulltext_index_warning' => "Вы хотите пересодать полнотекстовый индекс. Это займет время и снизит производительность. Продолжить?",
'creation_date' => "Создан",
'current_version' => "Текущая версия",
'daily' => "Ежедневно",
'databasesearch' => "Поиск по БД",
'december' => "Декабрь",
'default_access' => "Доступ по-умолчанию",
'default_keywords' => "Доступные теги",
'delete' => "Удалить",
'details' => "Детали",
'details_version' => "Детали версии: [version]",
'disclaimer' => "Работник, помни! От тебя зависит успех фирмы и всей страны!",
'do_object_repair' => "Исправить все папки и документы",
'document_already_locked' => "Документ уже заблокирован",
'document_deleted' => "Документ удален",
'document_deleted_email' => "Документ удален",
'document' => "Документ",
'document_infos' => "Информацию о документе",
'document_is_not_locked' => "Документ не заблокирован",
'document_link_by' => "Связан",
'document_link_public' => "Публичный",
'document_moved_email' => "Документ перемещен",
'document_renamed_email' => "Документ переименован",
'documents' => "Документы",
'documents_in_process' => "Документы в работе",
'documents_locked_by_you' => "Документы, заблокированые Вами",
'document_status_changed_email' => "Статус документа изменен",
'documents_to_approve' => "Документы, ожидающие Вашего утверждения",
'documents_to_review' => "Документы, ожидающие Вашей рецензии",
'documents_user_requiring_attention' => "Ваши документы, требующие внимания",
'document_title' => "Документ '[documentname]'",
'document_updated_email' => "Документ обновлен",
'does_not_expire' => "Без срока",
'does_not_inherit_access_msg' => "Наследовать уровень доступа",
'download' => "Скачать",
'draft_pending_approval' => "Черновик - ожидает утверждения",
'draft_pending_review' => "Черновик - ожидает рецензии",
'dump_creation' => "Создание дампа БД",
'dump_creation_warning' => "Эта операция создаст дамп базы данных. После создания, файл будет сохранен в каталоге данных сервера.",
'dump_list' => "Соществующие дампы",
'dump_remove' => "Удалить дамп",
'edit_comment' => "Редактировать коментарий",
'edit_default_keywords' => "Редактировать теги",
'edit_document_access' => "Редактировать доступ",
'edit_document_notify' => "Список уведомления документа",
'edit_document_props' => "Редактировать документ",
'edit' => "Редактировать",
'edit_event' => "Редактировать событие",
'edit_existing_access' => "Редактировать список доступа",
'edit_existing_notify' => "Редактировать список уведомлений",
'edit_folder_access' => "Редактировать доступ",
'edit_folder_notify' => "Список уведомлений папки",
'edit_folder_props' => "Редактировать папку",
'edit_group' => "Редактировать группу",
'edit_user_details' => "Редактировать данные пользователя",
'edit_user' => "Редаткировать пользователя",
'email' => "Email",
'email_error_title' => "Email не указан",
'email_footer' => "Вы всегда можете изменить e-mail исползуя функцию 'Моя учетка'",
'email_header' => "Это автоматическое уведомление сервера документооборота",
'email_not_given' => "Введите настоящий email.",
'empty_notify_list' => "Нет записей",
'error' => "Ошибка",
'error_no_document_selected' => "Нет выбраных документов",
'error_no_folder_selected' => "Нет выбраных папок",
'error_occured' => "Произошла ошибка",
'event_details' => "Детали события",
'expired' => "Истек",
'expires' => "Истекает",
'expiry_changed_email' => "Дата истечения изменена",
'february' => "Февраль",
'file' => "Файл",
'files_deletion' => "Удаление файлов",
'files_deletion_warning' => "Эта операция удалит все файлы во всех папках. Информация о версиях останется доступна",
'files' => "Файлы",
'file_size' => "Размер",
'folder_contents' => "Содержимое папки",
'folder_deleted_email' => "Папка удалена",
'folder' => "Папка",
'folder_infos' => "Информация о папке",
'folder_moved_email' => "Папка перемещена",
'folder_renamed_email' => "Папка переименована",
'folders_and_documents_statistic' => "Обзор содержимого",
'folders' => "Папки",
'folder_title' => "Папка '[foldername]'",
'friday' => "Пятница",
'from' => "От",
'fullsearch' => "Полнотекстовый поиск",
'fullsearch_hint' => "Использовать полнотекстовый индекс",
'fulltext_info' => "Информация о полнотекстовом индексе",
'global_default_keywords' => "Глобальные теги",
'global_document_categories' => "Категории",
'group_approval_summary' => "Сводка по утверждению группы",
'group_exists' => "Группа уже существует",
'group' => "Группа",
'group_management' => "Управление группами",
'group_members' => "Члены группы",
'group_review_summary' => "Сводка по рецензированию группы",
'groups' => "Группы",
'guest_login_disabled' => "Гостевой вход отключен",
'guest_login' => "Войти как гость",
'help' => "Помощь",
'hourly' => "Ежечасно",
'human_readable' => "Человекопонятный архив",
'include_documents' => "Включить документы",
'include_subdirectories' => "Включить подкаталоги",
'individuals' => "Личности",
'inherits_access_msg' => "Доступ унаследован.",
'inherits_access_copy_msg' => "Скопировать наследованный список",
'inherits_access_empty_msg' => "Начать с пустого списка доступа",
'internal_error_exit' => "Внутренняя ошибка. Невозможно выполнить запрос. Завершение.",
'internal_error' => "Внутренняя ошибка",
'invalid_access_mode' => "Неверный уровень доступа",
'invalid_action' => "Неверное действие",
'invalid_approval_status' => "Неверный статус утверждения",
'invalid_create_date_end' => "Неверная конечная дата для диапазаона даты создания",
'invalid_create_date_start' => "Неверная начальная дата для диапазаона даты создания",
'invalid_doc_id' => "Неверный идентификатор документа",
'invalid_file_id' => "Неверный идентификатор файла",
'invalid_folder_id' => "Неверный идентификатор папки",
'invalid_group_id' => "Неверный идентификатор группы",
'invalid_link_id' => "Неверный идентификатор ссылки",
'invalid_request_token' => "Invalid Request Token",
'invalid_review_status' => "Неверный статус рецензирования",
'invalid_sequence' => "Неверное значение последовательности",
'invalid_status' => "Неверный статус документа",
'invalid_target_doc_id' => "Неверный идентификатор целевого документа",
'invalid_target_folder' => "Неверный идентификатор целевой папки",
'invalid_user_id' => "Неверный идентификатор пользователя",
'invalid_version' => "Неверная версия документа",
'is_hidden' => "Не показывать в списке пользователей",
'january' => "Январь",
'js_no_approval_group' => "Выберите утверждающую группу",
'js_no_approval_status' => "Выберите статус утверждения",
'js_no_comment' => "Нет коментария",
'js_no_email' => "Введите свой Email",
'js_no_file' => "Выберите файл",
'js_no_keywords' => "Укажите теги",
'js_no_login' => "Введите логин",
'js_no_name' => "Введите имя",
'js_no_override_status' => "Выберите новый [override] статус",
'js_no_pwd' => "Введите пароль",
'js_no_query' => "Введите запрос",
'js_no_review_group' => "Выберите рецензирующую группу",
'js_no_review_status' => "Выберите статус рецензии",
'js_pwd_not_conf' => "Пароль и его подтверждение не совпадают",
'js_select_user_or_group' => "Выберите хотя бы пользователя или группу",
'js_select_user' => "Выберите пользователя",
'july' => "Июль",
'june' => "Июнь",
'keyword_exists' => "Тег существует",
'keywords' => "Теги",
'language' => "Язык",
'last_update' => "Последнее обновление",
'link_alt_updatedocument' => "Если Вы хотите загрузить файлы больше текущего лимита, используйте другой <a href=\"%s\">способ</a>.",
'linked_documents' => "Связаные документы",
'linked_files' => "Приложения",
'local_file' => "Локальный файл",
'locked_by' => "Заблокирован",
'lock_document' => "Заблокировать",
'lock_message' => "Документ заблокирован <a href=\"mailto:[email]\">[username]</a>. Только имеющие права могут его разблокировать.",
'lock_status' => "Статус",
'login' => "Логин",
'login_error_text' => "Ошибка входа. Проверьте логин и пароль.",
'login_error_title' => "Ошибка входа",
'login_not_given' => "Не указан пользователь",
'login_ok' => "Вход успешен",
'log_management' => "Управление логами",
'logout' => "Выход",
'manager' => "Менеджер",
'march' => "Март",
'max_upload_size' => "Максимальный размер файла для загрузки",
'may' => "Май",
'monday' => "Понедельник",
'month_view' => "Вид месяца",
'monthly' => "Ежемесячно",
'move_document' => "Переместить документ",
'move_folder' => "Переместить папку",
'move' => "Переместить",
'my_account' => "Моя учетка",
'my_documents' => "Мои документы",
'name' => "Имя",
'new_default_keyword_category' => "Добавить категорию",
'new_default_keywords' => "Добавить теги",
'new_document_category' => "Добавить категорию",
'new_document_email' => "Новый документ",
'new_file_email' => "Новое приложение",
'new_folder' => "Новая папка",
'new' => "Новый",
'new_subfolder_email' => "Новая папка",
'new_user_image' => "Новое изображение",
'no_action' => "Действие не требуется",
'no_approval_needed' => "Утверждение не требуется",
'no_attached_files' => "Нет прикрепленных файлов",
'no_default_keywords' => "Нет тегов",
'no_docs_locked' => "Нет заблокированых документов",
'no_docs_to_approve' => "Нет документов, нуждающихся в утверждении",
'no_docs_to_look_at' => "Нет документов, нуждающихся во внимании",
'no_docs_to_review' => "Нет документов, нуждающихся в рецензии",
'no_group_members' => "Группа не имеет членов",
'no_groups' => "Нет групп",
'no' => "Нет",
'no_linked_files' => "Нет прикрепленных файлов",
'no_previous_versions' => "Нет других версий",
'no_review_needed' => "Рецензия не требуется",
'notify_added_email' => "Вы добавлены в список уведомлений",
'notify_deleted_email' => "Вы удалены из списка уведомлений",
'no_update_cause_locked' => "Вы не можете обновить документ. Свяжитесь с заблокировавшим его пользователем.",
'no_user_image' => "Изображение не найдено",
'november' => "Ноябрь",
'objectcheck' => "Проверка Папки/Документа",
'obsolete' => "Устарел",
'october' => "Октябрь",
'old' => "Старый",
'only_jpg_user_images' => "Разрешены только .jpg-изображения",
'owner' => "Владелец",
'ownership_changed_email' => "Владелец изменен",
'password' => "Пароль",
'password_repeat' => "Повторите пароль",
'password_forgotten' => "Забыл пароль",
'password_forgotten_email_subject' => "Забыл пароль",
'password_forgotten_email_body' => "Уважаемый пользователь,\n\nмы получили запрос на изменение Вашего пароля.\n\nЧто бы это сделать, перейдите по ссылке:\n\n###URL_PREFIX###out/out.ChangePassword.php?hash=###HASH###\n\nЕсли вы и после этого не сможете войти, свяжитесь с администратором.",
'password_forgotten_send_hash' => "Инструкции высланы на email",
'password_forgotten_text' => "Заполните форму и следуйте инструкциям в письме",
'password_forgotten_title' => "Пароль выслан",
'personal_default_keywords' => "Личный список тегов",
'previous_versions' => "Предыдущие версии",
'refresh' => "Обновить",
'rejected' => "Отклонен",
'released' => "Утвержден",
'removed_approver' => "удален из списка утверждающих",
'removed_file_email' => "Удалить приложение",
'removed_reviewer' => "удален из списка рецензирующих",
'repairing_objects' => "Восстановление папок и документов",
'results_page' => "Страница результатов",
'review_deletion_email' => "Запрос на рецензию удален",
'reviewer_already_assigned' => "уже назначен на рецензирование",
'reviewer_already_removed' => "уже удален из списка рецензирующих или уже оставил рецензию",
'reviewers' => "Рецензирующие",
'review_group' => "Рецензирующая группа",
'review_request_email' => "Запрос на рецензию",
'review_status' => "Статус рецензии",
'review_submit_email' => "Отправленная рецензия",
'review_summary' => "Сводка по рецензии",
'review_update_failed' => "Ошибка обновления статуса рецензии",
'rm_default_keyword_category' => "Удалить категорию",
'rm_document' => "Удалить документ",
'rm_document_category' => "Удалить категорию",
'rm_file' => "Удалить файл",
'rm_folder' => "Удалить папку",
'rm_group' => "Удалить группу",
'rm_user' => "Удалить этого пользователя",
'rm_version' => "Удалить версию",
'role_admin' => "Админ",
'role_guest' => "Гость",
'role_user' => "Пользователь",
'role' => "Роль",
'saturday' => "Суббота",
'save' => "Сохранить",
'search_fulltext' => "Полнотекстовый поиск",
'search_in' => "Поиск",
'search_mode_and' => "все слова",
'search_mode_or' => "хотя бы одно слово",
'search_no_results' => "Нет документов, соответствующих запросу",
'search_query' => "Искать",
'search_report' => "Найдено [doccount] документов и [foldercount] папок",
'search_report_fulltext' => "Найдено [doccount] документов",
'search_results_access_filtered' => "Результаты поиска могут содержать объекты к которым у вас нет доступа",
'search_results' => "Результаты поиска",
'search' => "Поиск",
'search_time' => "Прошло: [time] sec.",
'selection' => "Выбор",
'select_one' => "Выбрать один",
'september' => "Сентябрь",
'seq_after' => "После \"[prevname]\"",
'seq_end' => "В конце",
'seq_keep' => "Сохранить позицию",
'seq_start' => "Первая позиция",
'sequence' => "Последовательность",
'set_expiry' => "Установить истечение",
'set_owner_error' => "Ошибка при установке владельца",
'set_owner' => "Установить владельца",
'settings_install_welcome_title' => "Добро пожаловать в установку SeedDMS",
'settings_install_welcome_text' => "<p>Прежде чем начать, убедитесь что вы создали файл 'ENABLE_INSTALL_TOOL' в каталоге конфигурации, иначе установка не будет работать. На NIX-подобных это можно сделать командой 'touch conf/ENABLE_INSTALL_TOOL'. После установки удалите файл.</p><p>SeedDMS имеет минимальные требования. Нужна mysql БД и веб-сервер с php. Для того что бы работал полнотекстовый поиск lucene, также необходима Zend framework, установленая там где ее видит php. Начиная с версии 3.2.0 letoDMS, ADOdb не будет частью дистрибутива. Скачайте ее с <a href=\"http://adodb.sourceforge.net/\">http://adodb.sourceforge.net</a> и установите. Путь к ней может быть указан позднее при установке.</p><p>Если Вы хотите создать БД до установки, тогда создайте ее ручками (тут так и было написано)))), опционально создайте юзера с правами на бд и импортируйте дамп из папки конфигурации. Установочный скрипт это может сделать и сам, но понадобится доступ к БД с правами для создания базы данных.</p>",
'settings_start_install' => "Начать установку",
'settings_activate_module' => "Активировать модуль",
'settings_activate_php_extension' => "Активировать расширение PHP",
'settings_adminIP' => "Админский IP",
'settings_adminIP_desc' => "Если установить, то админ сможет зайти только с этого IP. Оставьте пустым во избежании апокалипсиса. Не работает с LDAP",
'settings_ADOdbPath' => "Путь к ADOdb",
'settings_ADOdbPath_desc' => "Папка содержащая ПАПКУ ADOdb",
'settings_Advanced' => "Дополнительно",
'settings_apache_mod_rewrite' => "Apache - Module Rewrite",
'settings_Authentication' => "Настройки авторизации",
'settings_Calendar' => "Настройки календаря",
'settings_calendarDefaultView' => "Вид календаря по-умолчанию",
'settings_calendarDefaultView_desc' => "Вид календаря по-умолчанию",
'settings_contentDir' => "Каталог контента",
'settings_contentDir_desc' => "Куда сохраняются загруженые файлы (лучше выбрать каталог, недоступный веб-серверу)",
'settings_contentOffsetDir' => "Content Offset Directory",
'settings_contentOffsetDir_desc' => "Во избежании проблем с файловой системой была введена новая структура папок в каталоге контента. Необходима базовая папка, откуда начать. Впрочем оставьте тут все как есть, 1048576, но может быть любым числом или строкой, не существующей уже в папке контента",
'settings_coreDir' => "Папка Core letoDMS",
'settings_coreDir_desc' => "Путь к SeedDMS_Core (не обязательно)",
'settings_luceneClassDir' => "Папка Lucene SeedDMS",
'settings_luceneClassDir_desc' => "Путь к SeedDMS_Lucene (не обязательно)",
'settings_luceneDir' => "Папка индекса Lucene",
'settings_luceneDir_desc' => "Путь, куда Lucene будет писать свой индекс",
'settings_cannot_disable' => "Невозможно удлить ENABLE_INSTALL_TOOL",
'settings_install_disabled' => "ENABLE_INSTALL_TOOL удален. Теперь можно залогиниться для последующей конфигурации системы.",
'settings_createdatabase' => "Создать таблицы БД",
'settings_createdirectory' => "Создать папку",
'settings_currentvalue' => "Текущее значение",
'settings_Database' => "Настройки БД",
'settings_dbDatabase' => "БД",
'settings_dbDatabase_desc' => "Название БД, введенное в ходе установки. Не изменять без необходимости, только, например, если БД перемещена.",
'settings_dbDriver' => "Тип БД",
'settings_dbDriver_desc' => "Тип БД, введенный в ходе установки. Не изменять без необходимости, только, например, если БД изменила движок. Драйвер adodb (читать мануал adodb)",
'settings_dbHostname_desc' => "Хост БД, введенный в ходе установки. Не изменять без необходимости, только, например, если БД перемещена.",
'settings_dbHostname' => "Хост",
'settings_dbPass_desc' => "Пароль, введенный в ходе установки",
'settings_dbPass' => "Пароль",
'settings_dbUser_desc' => "Логин, введенный в ходе установки. Не изменять без необходимости, например если БД была перемещена.",
'settings_dbUser' => "Логин",
'settings_dbVersion' => "Схема БД утсрала",
'settings_delete_install_folder' => "Удалите ENABLE_INSTALL_TOOL в каталоге конфигурации, для того что бы начать использовать систему",
'settings_disable_install' => "Удалить ENABLE_INSTALL_TOOL есди возможно",
'settings_disableSelfEdit_desc' => "Если включить, пользователи не смогут редактировать свою информацию",
'settings_disableSelfEdit' => "Отключить собстенное редактирование",
'settings_Display' => "Отключить настройки",
'settings_Edition' => "Настройки редакции",
'settings_enableAdminRevApp_desc' => "Отключить, что бы скрыть админа из списка рецензирующих/утверждающих",
'settings_enableAdminRevApp' => "Админ рулит)))",
'settings_enableCalendar_desc' => "Включить/отключить календарь",
'settings_enableCalendar' => "Включить календарь",
'settings_enableConverting_desc' => "Включить/отключить конвертацию файлов",
'settings_enableConverting' => "Включить конвертацию",
'settings_enableEmail_desc' => "Включить/отключить автоматическое уведомление по email",
'settings_enableEmail' => "Включить E-mail",
'settings_enableFolderTree_desc' => "Отключено - не показывать дерево папок",
'settings_enableFolderTree' => "Включить дерево папок",
'settings_enableFullSearch' => "Включить полнотекстовы поиск",
'settings_enableFullSearch_desc' => "Включить полнотекстовый поиск",
'settings_enableGuestLogin_desc' => "Что бы разрешить гостевой вход, включите эту опцию. Гостевой вход должен использоваться только в довереной среде.",
'settings_enableGuestLogin' => "Включить гостевой вход",
'settings_enableLargeFileUpload_desc' => "Если включено, загрузка файлов доступна так же через ява-апплет, называемый jumploader, без лимита на размер файла. Это так же позволит загружать несколько файлов за раз.",
'settings_enableLargeFileUpload' => "Включить ява-загрузчик файлов",
'settings_enablePasswordForgotten_desc' => "Если включено, разрешает пользователям восстанавливать пароль на email.",
'settings_enablePasswordForgotten' => "Включить восстановление пароля",
'settings_enableUserImage_desc' => "Включить аватары пользователей",
'settings_enableUserImage' => "Включить аватары",
'settings_enableUsersView_desc' => "Включить/отключить просмотр групп/пользователей для всех пользователей",
'settings_enableUsersView' => "Включить просмотр пользователей",
'settings_error' => "Ошибка",
'settings_expandFolderTree_desc' => "Разворачивать дерево папок",
'settings_expandFolderTree' => "Разворачивать дерево папок",
'settings_expandFolderTree_val0' => "начинать со свернутого дерева",
'settings_expandFolderTree_val1' => "начинать с развернутого дерева с развернутым первым уровнем",
'settings_expandFolderTree_val2' => "начинать с полностью развернутого дерева",
'settings_firstDayOfWeek_desc' => "Первый день недели",
'settings_firstDayOfWeek' => "Первый день недели",
'settings_footNote_desc' => "Сообщение, показываемое внизу каждой страницы",
'settings_footNote' => "Футер",
'settings_guestID_desc' => "Идентификатор гостя (можно не изменять)",
'settings_guestID' => "Идентификатор гостя",
'settings_httpRoot_desc' => "Относительный путь в URL, после доменной части. Без http://. Например если полный URL http://www.example.com/letodms/, то нам нужно указать '/letodms/'. Если URL http://www.example.com/, то '/'",
'settings_httpRoot' => "Корень Http",
'settings_installADOdb' => "Установить ADOdb",
'settings_install_success' => "Установка успешно завершена.",
'settings_install_pear_package_log' => "Установите пакет Pear 'Log'",
'settings_install_pear_package_webdav' => "Установите пакет Pear 'HTTP_WebDAV_Server', если собираетесь использовать этот протокол",
'settings_install_zendframework' => "Установите Zend Framework, если собираетесь использовать полнотекстовый поиск",
'settings_language' => "Язык по-умолчанию",
'settings_language_desc' => "Язык по-умолчанию (название подпапки в папке \"languages\")",
'settings_logFileEnable_desc' => "Включить/отключить лог",
'settings_logFileEnable' => "Включить лог",
'settings_logFileRotation_desc' => "Прокрутка лога",
'settings_logFileRotation' => "Прокрутка лога",
'settings_luceneDir' => "Каталог для полнотекстового индекса",
'settings_maxDirID_desc' => "Максимум подпапок в родительской папке. По-умолчанию: 32700.",
'settings_maxDirID' => "Максимальный ID папки",
'settings_maxExecutionTime_desc' => "Устанавливает максимальное время выполнения скрипта, перед тем как он будет прибит парсером",
'settings_maxExecutionTime' => "Максимальное время выполнения (с)",
'settings_more_settings' => "Еще настройки. Дефолтный логин: admin/admin",
'settings_no_content_dir' => "Каталог контента",
'settings_notfound' => "Не найден",
'settings_notwritable' => "Конфигурация не может быть сохранена, потому что файл конфигурации только для чтения.",
'settings_partitionSize' => "Частичный размер файла",
'settings_partitionSize_desc' => "Размер частичных файлов в байтах, загружаемых через jumploader. Не устанавливать выше максимально возможного размера, установленного на сервере.",
'settings_perms' => "Разрешения",
'settings_pear_log' => "Пакет Pear : Log",
'settings_pear_webdav' => "Пакет Pear : HTTP_WebDAV_Server",
'settings_php_dbDriver' => "PHP extension : php_'see current value'",
'settings_php_gd2' => "PHP extension : php_gd2",
'settings_php_mbstring' => "PHP extension : php_mbstring",
'settings_printDisclaimer_desc' => "Если включенно, то дисклаймер из lang.inc будет выводится внизу каждой страницы",
'settings_printDisclaimer' => "Выводить дисклаймер",
'settings_restricted_desc' => "Разрешать вход пользователям, только если у них есть соответствующая учетка в БД (независимо от успешного входа через LDAP)",
'settings_restricted' => "Ограниченый доступ",
'settings_rootDir_desc' => "Путь к letoDMS",
'settings_rootDir' => "Корневая папка",
'settings_rootFolderID_desc' => "ID каждой корневой папки (можно не менять)",
'settings_rootFolderID' => "ID корневой папки",
'settings_SaveError' => "Ошибка при сохранении конфигурации",
'settings_Server' => "Настройки сервера",
'settings' => "Настройки",
'settings_siteDefaultPage_desc' => "Страница,показываемая после входа. Есди пусто, то out/out.ViewFolder.php",
'settings_siteDefaultPage' => "Страница по-умолчанию",
'settings_siteName_desc' => "Название сайта, используемое в заголовках. По-умолчанию: letoDMS",
'settings_siteName' => "Название сайта",
'settings_Site' => "Сайт",
'settings_smtpPort_desc' => "Порт сервера SMTP, по-умолчанию 25",
'settings_smtpPort' => "SMTP порт",
'settings_smtpSendFrom_desc' => "Отправлено от",
'settings_smtpSendFrom' => "От",
'settings_smtpServer_desc' => "Хост SMTP",
'settings_smtpServer' => "Хост SMTP",
'settings_SMTP' => "Настройки SMTP",
'settings_stagingDir' => "Папка для частичных загрузок",
'settings_strictFormCheck_desc' => "Если включить, то все поля формы будут проверяться на заполненость. Если выключить, то коментарии и теги станут опциональными. Коментарий всегда обезателен при рецензировании или изменении статуса.",
'settings_strictFormCheck' => "Полная проверка форм",
'settings_suggestionvalue' => "Предлагаемое значение",
'settings_System' => "Система",
'settings_theme' => "Тема по-умолчанию",
'settings_theme_desc' => "Стиль по-умолчанию (подпапка в папке \"styles\")",
'settings_titleDisplayHack_desc' => "Костыль для заголовков длиннее двух строк",
'settings_titleDisplayHack' => "Костыль для заголовков",
'settings_updateDatabase' => "Запустить обновление схемы БД",
'settings_updateNotifyTime_desc' => "Пользователи уведомляются об измененях в документах за последние 'Update Notify Time' секунд",
'settings_updateNotifyTime' => "Вермя уведомлений об изменениях",
'settings_versioningFileName_desc' => "Названия файла версий, создаваемого инструментом бекапа",
'settings_versioningFileName' => "Название файла версий",
'settings_viewOnlineFileTypes_desc' => "Файлы с одним из следующих расширений могут просматриваться онлайн (только маленькие буквы)",
'settings_viewOnlineFileTypes' => "Типы файлов для просмотра онлайн",
'settings_zendframework' => "Zend Framework",
'signed_in_as' => "Вход под",
'sign_in' => "вход",
'sign_out' => "выход",
'space_used_on_data_folder' => "Размер каталога данных",
'status_approval_rejected' => "Черновик отклонен",
'status_approved' => "Утвержден",
'status_approver_removed' => "Утверждающий удален из процесса",
'status_not_approved' => "Не утвержден",
'status_not_reviewed' => "Не рецензирован",
'status_reviewed' => "Рецензирован",
'status_reviewer_rejected' => "Черновик отклонен",
'status_reviewer_removed' => "Рецензирующий удален из процесса",
'status' => "Статус",
'status_unknown' => "Неизвестный",
'storage_size' => "Размер хранилища",
'submit_approval' => "Утвердить",
'submit_login' => "Войти",
'submit_password' => "Установить новый пароль",
'submit_password_forgotten' => "Начать процесс",
'submit_review' => "Рецензировать",
'sunday' => "Воскресенье",
'theme' => "Тема",
'thursday' => "Четверг",
'toggle_manager' => "Включить менеджер",
'to' => "к",
'tuesday' => "Вторник",
'under_folder' => "В папке",
'unknown_command' => "Команда не опознана.",
'unknown_document_category' => "Неизвестная категория",
'unknown_group' => "Неизвестный идентификатор группы",
'unknown_id' => "неизвестный идентификатор",
'unknown_keyword_category' => "Неизвестная категория",
'unknown_owner' => "Неизвестный идентификатор собственника",
'unknown_user' => "Неизвестный идентификатор пользователя",
'unlock_cause_access_mode_all' => "Вы все еще можете его обновить, потому что имеете уровень доступа \"all\". Блокировка будет снята автоматически.",
'unlock_cause_locking_user' => "Вы все еще можете его обновить, потому что вы один из тех кто его заблокировал. Блокировка будет снята автоматически.",
'unlock_document' => "Разблокировать",
'update_approvers' => "Обновить список утверждающих",
'update_document' => "Обновить документ",
'update_fulltext_index' => "Обновить полнотекстовый индекс",
'update_info' => "Обновить информацию",
'update_locked_msg' => "Этот документ заблокирован",
'update_reviewers' => "Обновить список рецензирующих",
'update' => "Обновить",
'uploaded_by' => "Загружен",
'uploading_failed' => "Загрузка не удалась. Свяжитесь с админом",
'use_default_categories' => "Использовать предопределенные категории",
'use_default_keywords' => "Использовать предопределенные теги",
'user_exists' => "Пользователь существует",
'user_image' => "Изображение",
'user_info' => "Информация о пользователе",
'user_list' => "Список пользователей",
'user_login' => "Идентификатор пользователя",
'user_management' => "Управление пользователями",
'user_name' => "Полное имя",
'users' => "Пользователи",
'user' => "Пользователь",
'version_deleted_email' => "Версия удалена",
'version_info' => "Информация о версии",
'versioning_file_creation' => "Создание файла версий",
'versioning_file_creation_warning' => "Эта операция создаст файл версий для всей папки. После создания файл будет сохранен в каталоге документов.",
'versioning_info' => "Информация о версиях",
'version' => "Версия",
'view_online' => "Просмотреть",
'warning' => "Внимание",
'wednesday' => "Среда",
'week_view' => "Неделя",
'year_view' => "Год",
'yes' => "Да",
);
?>
