/**
 * This file is generated by jsonrpcstub, DO NOT CHANGE IT MANUALLY!
 */

#ifndef JSONRPC_CPP_STUB_FORWARDINDEXSERVER_H_
#define JSONRPC_CPP_STUB_FORWARDINDEXSERVER_H_

#include <jsonrpccpp/server.h>

class ForwardIndexServer : public jsonrpc::AbstractServer<ForwardIndexServer>
{
    public:
        ForwardIndexServer(jsonrpc::AbstractServerConnector &conn, jsonrpc::serverVersion_t type = jsonrpc::JSONRPC_SERVER_V2) : jsonrpc::AbstractServer<ForwardIndexServer>(conn, type)
        {
            this->bindAndAddMethod(jsonrpc::Procedure("index_name", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING,  NULL), &ForwardIndexServer::index_nameI);
            this->bindAndAddMethod(jsonrpc::Procedure("num_docs", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER,  NULL), &ForwardIndexServer::num_docsI);
            this->bindAndAddMethod(jsonrpc::Procedure("doc_name", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::doc_nameI);
            this->bindAndAddMethod(jsonrpc::Procedure("doc_path", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::doc_pathI);
            this->bindAndAddMethod(jsonrpc::Procedure("docs", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_ARRAY,  NULL), &ForwardIndexServer::docsI);
            this->bindAndAddMethod(jsonrpc::Procedure("doc_size", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::doc_sizeI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_label", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::get_labelI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_label_id", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::get_label_idI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_id", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "_label",jsonrpc::JSON_STRING, NULL), &ForwardIndexServer::get_idI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_label_from_lbl_id", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "_label_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::get_label_from_lbl_idI);
            this->bindAndAddMethod(jsonrpc::Procedure("num_labels", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER,  NULL), &ForwardIndexServer::num_labelsI);
            this->bindAndAddMethod(jsonrpc::Procedure("class_labels", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_ARRAY,  NULL), &ForwardIndexServer::class_labelsI);
            this->bindAndAddMethod(jsonrpc::Procedure("unique_terms_by_id", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::unique_terms_by_idI);
            this->bindAndAddMethod(jsonrpc::Procedure("unique_terms", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER,  NULL), &ForwardIndexServer::unique_termsI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_term_id", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER, "term",jsonrpc::JSON_STRING, NULL), &ForwardIndexServer::get_term_idI);
            this->bindAndAddMethod(jsonrpc::Procedure("get_term", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING, "_term_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::get_termI);
            this->bindAndAddMethod(jsonrpc::Procedure("search_primary", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_OBJECT, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::search_primaryI);
            this->bindAndAddMethod(jsonrpc::Procedure("liblinear_data", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_STRING, "_doc_id",jsonrpc::JSON_INTEGER, NULL), &ForwardIndexServer::liblinear_dataI);
            this->bindAndAddMethod(jsonrpc::Procedure("is_valid", jsonrpc::PARAMS_BY_NAME, jsonrpc::JSON_INTEGER,  NULL), &ForwardIndexServer::is_validI);
        }

        inline virtual void index_nameI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->index_name();
        }
        inline virtual void num_docsI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->num_docs();
        }
        inline virtual void doc_nameI(const Json::Value &request, Json::Value &response)
        {
            response = this->doc_name(request["_doc_id"].asInt());
        }
        inline virtual void doc_pathI(const Json::Value &request, Json::Value &response)
        {
            response = this->doc_path(request["_doc_id"].asInt());
        }
        inline virtual void docsI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->docs();
        }
        inline virtual void doc_sizeI(const Json::Value &request, Json::Value &response)
        {
            response = this->doc_size(request["_doc_id"].asInt());
        }
        inline virtual void get_labelI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_label(request["_doc_id"].asInt());
        }
        inline virtual void get_label_idI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_label_id(request["_doc_id"].asInt());
        }
        inline virtual void get_idI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_id(request["_label"].asString());
        }
        inline virtual void get_label_from_lbl_idI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_label_from_lbl_id(request["_label_id"].asInt());
        }
        inline virtual void num_labelsI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->num_labels();
        }
        inline virtual void class_labelsI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->class_labels();
        }
        inline virtual void unique_terms_by_idI(const Json::Value &request, Json::Value &response)
        {
            response = this->unique_terms_by_id(request["_doc_id"].asInt());
        }
        inline virtual void unique_termsI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->unique_terms();
        }
        inline virtual void get_term_idI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_term_id(request["term"].asString());
        }
        inline virtual void get_termI(const Json::Value &request, Json::Value &response)
        {
            response = this->get_term(request["_term_id"].asInt());
        }
        inline virtual void search_primaryI(const Json::Value &request, Json::Value &response)
        {
            response = this->search_primary(request["_doc_id"].asInt());
        }
        inline virtual void liblinear_dataI(const Json::Value &request, Json::Value &response)
        {
            response = this->liblinear_data(request["_doc_id"].asInt());
        }
        inline virtual void is_validI(const Json::Value &request, Json::Value &response)
        {
            (void)request;
            response = this->is_valid();
        }
        virtual std::string index_name() = 0;
        virtual int num_docs() = 0;
        virtual std::string doc_name(int _doc_id) = 0;
        virtual std::string doc_path(int _doc_id) = 0;
        virtual Json::Value docs() = 0;
        virtual int doc_size(int _doc_id) = 0;
        virtual Json::Value get_label(int _doc_id) = 0;
        virtual int get_label_id(int _doc_id) = 0;
        virtual int get_id(const std::string& _label) = 0;
        virtual int get_label_from_lbl_id(int _label_id) = 0;
        virtual int num_labels() = 0;
        virtual Json::Value class_labels() = 0;
        virtual int unique_terms_by_id(int _doc_id) = 0;
        virtual int unique_terms() = 0;
        virtual int get_term_id(const std::string& term) = 0;
        virtual std::string get_term(int _term_id) = 0;
        virtual Json::Value search_primary(int _doc_id) = 0;
        virtual std::string liblinear_data(int _doc_id) = 0;
        virtual int is_valid() = 0;
};

#endif //JSONRPC_CPP_STUB_FORWARDINDEXSERVER_H_
